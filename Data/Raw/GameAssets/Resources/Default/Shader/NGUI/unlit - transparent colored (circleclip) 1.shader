Shader "Hidden/Unlit/Transparent Colored (CircleClip) 1"
{
	Properties
	{
		_MainTex ("Base (RGB), Alpha (A)", 2D) = "black" {}		
		_Circle ("Center & Size", Vector) = (0.5,0.5,0.13,0.13)
		_Reverse("Is Reverse (0 or 1)", float) = 1	
	}

	SubShader
	{
		LOD 200

		Tags
		{
			"Queue" = "Transparent"
			"IgnoreProjector" = "True"
			"RenderType" = "Transparent"
		}
		
		UsePass "Ares/Base/NGUIPassHelper/NGUI&TRANSPARENT&CC&1&TARGET3"
	}
	
	SubShader
	{
		LOD 100

		Tags
		{
			"Queue" = "Transparent"
			"IgnoreProjector" = "True"
			"RenderType" = "Transparent"
		}
		
		UsePass "Ares/Base/NGUIPassHelper/NGUI&TRANSPARENT&CC&1"
	}
	
	SubShader
	{
		//LOD 100

		Tags
		{
			"Queue" = "Transparent"
			"IgnoreProjector" = "True"
			"RenderType" = "Transparent"
		}
		
		Pass
		{
			Cull Off
			Lighting Off
			ZWrite Off
			Fog { Mode Off }
			ColorMask RGB
			Blend SrcAlpha OneMinusSrcAlpha,Zero OneMinusSrcAlpha
			ColorMaterial AmbientAndDiffuse
			
			SetTexture [_MainTex]
			{
				Combine Texture * Primary
			}
		}
	}
}
