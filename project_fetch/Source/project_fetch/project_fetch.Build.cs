// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class project_fetch : ModuleRules
{
	public project_fetch(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", 
			"CoreUObject", 
			"Engine", 
			"InputCore", 
			"EnhancedInput",
			"GameplayTags",
			"GameplayTasks",
			"GameplayAbilities",
			"NavigationSystem",
			"AIModule",
			"Niagara",
			"UMG"
		});
	}
}
