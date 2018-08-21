/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilityBaseListController.h>

@class AXSwitchRecipe, AXSwitchRecipeMapping;

@interface SCATRecipeSwitchesController : AccessibilityBaseListController {

	AXSwitchRecipe* _recipe;
	AXSwitchRecipeMapping* _mapping;

}

@property (nonatomic,retain) AXSwitchRecipe * recipe;                      //@synthesize recipe=_recipe - In the implementation block
@property (nonatomic,retain) AXSwitchRecipeMapping * mapping;              //@synthesize mapping=_mapping - In the implementation block
-(BOOL)_isForExistingMappingWithMissingSwitch;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setRecipe:(AXSwitchRecipe *)arg1 ;
-(AXSwitchRecipe *)recipe;
-(id)specifiers;
-(AXSwitchRecipeMapping *)mapping;
-(void)setMapping:(AXSwitchRecipeMapping *)arg1 ;
@end
