/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSURL, NSString, NSDictionary, NSArray;

@interface NSBundle : NSObject {

	unsigned long long _flags;
	id _cfBundle;
	unsigned long long _reserved2;
	Class _principalClass;
	id _initialPath;
	id _resolvedPath;
	id _reserved3;
	id _lock;

}

@property (getter=isLoaded,readonly) BOOL loaded; 
@property (copy,readonly) NSURL * bundleURL; 
@property (copy,readonly) NSURL * resourceURL; 
@property (copy,readonly) NSURL * executableURL; 
@property (copy,readonly) NSURL * privateFrameworksURL; 
@property (copy,readonly) NSURL * sharedFrameworksURL; 
@property (copy,readonly) NSURL * sharedSupportURL; 
@property (copy,readonly) NSURL * builtInPlugInsURL; 
@property (copy,readonly) NSURL * appStoreReceiptURL; 
@property (copy,readonly) NSString * bundlePath; 
@property (copy,readonly) NSString * resourcePath; 
@property (copy,readonly) NSString * executablePath; 
@property (copy,readonly) NSString * privateFrameworksPath; 
@property (copy,readonly) NSString * sharedFrameworksPath; 
@property (copy,readonly) NSString * sharedSupportPath; 
@property (copy,readonly) NSString * builtInPlugInsPath; 
@property (copy,readonly) NSString * bundleIdentifier; 
@property (copy,readonly) NSDictionary * infoDictionary; 
@property (copy,readonly) NSDictionary * localizedInfoDictionary; 
@property (readonly) Class principalClass; 
@property (copy,readonly) NSArray * preferredLocalizations; 
@property (copy,readonly) NSArray * localizations; 
@property (copy,readonly) NSString * developmentLocalization; 
@property (copy,readonly) NSArray * executableArchitectures; 
+(id)loadedBundles;
+(id)allBundles;
+(id)allFrameworks;
+(id)findBundleResources:(id)arg1 callingMethod:(SEL)arg2 directory:(id)arg3 languages:(id)arg4 name:(id)arg5 types:(id)arg6 limit:(unsigned long long)arg7 ;
+(id)findBundleResourceURLsCallingMethod:(SEL)arg1 baseURL:(id)arg2 passingTest:(/*^block*/id)arg3 ;
+(id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 inBundleWithURL:(id)arg3 ;
+(void)setSystemLanguages:(id)arg1 ;
+(id)debugDescription;
+(id)mainBundle;
+(id)bundleForClass:(Class)arg1 ;
+(id)bundleWithPath:(id)arg1 ;
+(id)preferredLocalizationsFromArray:(id)arg1 forPreferences:(id)arg2 ;
+(id)bundleWithIdentifier:(id)arg1 ;
+(id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 ;
+(id)bundleWithURL:(id)arg1 ;
+(id)preferredLocalizationsFromArray:(id)arg1 ;
+(id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 ;
+(id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 inBundleWithURL:(id)arg4 ;
-(CFBundleRef)_cfBundleIfPresent;
-(NSURL *)appStoreReceiptURL;
-(id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forLocalization:(id)arg3 ;
-(id)findBundleResourceURLsCallingMethod:(SEL)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 localization:(id)arg3 ;
-(id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 ;
-(NSURL *)executableURL;
-(id)pathForAuxiliaryExecutable:(id)arg1 ;
-(id)URLForAuxiliaryExecutable:(id)arg1 ;
-(NSString *)privateFrameworksPath;
-(NSURL *)privateFrameworksURL;
-(NSString *)sharedFrameworksPath;
-(NSURL *)sharedFrameworksURL;
-(NSString *)sharedSupportPath;
-(NSURL *)sharedSupportURL;
-(NSString *)builtInPlugInsPath;
-(NSURL *)builtInPlugInsURL;
-(unsigned long long)versionNumber;
-(id)bundleLanguages;
-(void)invalidateResourceCache;
-(void)__static;
-(id)_regionsArray;
-(id)_pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forRegion:(id)arg4 ;
-(id)_pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forRegion:(id)arg3 ;
-(id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forLanguage:(id)arg4 ;
-(id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forLanguage:(id)arg3 ;
-(NSString *)developmentLocalization;
-(BOOL)preflightAndReturnError:(id*)arg1 ;
-(NSArray *)executableArchitectures;
-(double)preservationPriorityForTag:(id)arg1 ;
-(void)setPreservationPriority:(double)arg1 forTags:(id)arg2 ;
-(void)setPreservationPriority:(double)arg1 forTag:(id)arg2 ;
-(NSString *)resourcePath;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(NSDictionary *)infoDictionary;
-(NSString *)bundleIdentifier;
-(id)initWithURL:(id)arg1 ;
-(NSDictionary *)localizedInfoDictionary;
-(id)pathForResource:(id)arg1 ofType:(id)arg2 ;
-(NSArray *)localizations;
-(NSURL *)bundleURL;
-(NSString *)bundlePath;
-(NSArray *)preferredLocalizations;
-(NSString *)executablePath;
-(id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 ;
-(Class)principalClass;
-(id)initWithPath:(id)arg1 ;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 ;
-(id)objectForInfoDictionaryKey:(id)arg1 ;
-(BOOL)isLoaded;
-(BOOL)loadAndReturnError:(id*)arg1 ;
-(BOOL)load;
-(id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forLocalization:(id)arg4 ;
-(Class)classNamed:(id)arg1 ;
-(CFBundleRef)_cfBundle;
-(BOOL)unload;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 ;
-(id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 ;
-(NSURL *)resourceURL;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 localization:(id)arg4 ;
@end
