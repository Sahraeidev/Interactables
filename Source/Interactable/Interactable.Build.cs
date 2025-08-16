// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Interactable : ModuleRules
{
	public Interactable(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
