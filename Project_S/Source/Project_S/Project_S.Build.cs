// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Project_S : ModuleRules
{
	public Project_S(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput","GameplayTags","UMG","AIModule","GameplayAbilities","GameplayTasks","NavigationSystem" });

        PrivateIncludePaths.Add("Project_S");
    }
}
