// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AllYouCanDo : ModuleRules
{
	public AllYouCanDo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
