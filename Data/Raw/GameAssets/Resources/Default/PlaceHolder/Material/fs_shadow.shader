// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'


Shader "Ares/SpecialEffect/FS_Shadow" 
{
	Properties {
		_Color ("Main Color", Color) = (1, 1, 1, 1)	
		_MainTex ("Base", 2D) = "white" {}
	}
	
	SubShader {
		Tags { "RenderType" = "Transparent" "Queue" = "Transparent+50" }
		Cull Off
		Lighting Off
		ZWrite Off
		Fog { Mode Off }
		Blend Zero SrcColor
		
		Pass
		{
			Name "SIMPLE"					
			Cull Back
			CGPROGRAM
				#pragma vertex vert
				#pragma fragment frag				
				#pragma fragmentoption ARB_precision_hint_fastest
				#include "UnityCG.cginc"	
				
				uniform sampler2D _MainTex;				
				uniform half4 _MainTex_ST; 
				

				struct v2f_base
				{
					float4 pos	: SV_POSITION;
					half2 uv	: TEXCOORD0;					
				};

				v2f_base vert(appdata_base v)
				{
					v2f_base o;					
					o.pos = UnityObjectToClipPos( v.vertex );
					o.uv = TRANSFORM_TEX( v.texcoord, _MainTex );	
					return o;
				}

				fixed4 frag(v2f_base i) :COLOR
				{
					return tex2D(_MainTex,i.uv);
				}
			ENDCG
		}
	}
	FallBack Off
}
