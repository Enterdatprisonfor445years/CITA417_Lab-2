// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Lab2_CITA417 : ModuleRules
{
	public Lab2_CITA417(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"Lab2_CITA417",
			"Lab2_CITA417/Variant_Horror",
			"Lab2_CITA417/Variant_Horror/UI",
			"Lab2_CITA417/Variant_Shooter",
			"Lab2_CITA417/Variant_Shooter/AI",
			"Lab2_CITA417/Variant_Shooter/UI",
			"Lab2_CITA417/Variant_Shooter/Weapons"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
