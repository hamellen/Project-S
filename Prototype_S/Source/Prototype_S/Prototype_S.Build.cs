// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Prototype_S : ModuleRules
{
	public Prototype_S(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput","UMG","GameplayTags" });
	}
}
