/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSMutableDictionary, NSObject;

@interface MCManifest : NSObject {

	NSString* _systemFilePath;
	NSString* _userFilePath;
	NSMutableDictionary* _systemManifest;
	NSMutableDictionary* _userManifest;
	NSObject*<OS_dispatch_queue> _syncQueue;

}
+(id)sharedManifest;
+(id)installedSystemProfileDataWithIdentifier:(id)arg1 ;
+(id)installedUserProfileDataWithIdentifier:(id)arg1 ;
+(id)installedProfileWithIdentifier:(id)arg1 ;
+(id)installedSystemProfileWithIdentifier:(id)arg1 ;
+(id)installedUserProfileWithIdentifier:(id)arg1 ;
+(id)installedProfileDataWithIdentifier:(id)arg1 ;
+(void)_setSystemManifestPath:(id)arg1 userManifestPath:(id)arg2 ;
-(id)installedProfileWithIdentifier:(id)arg1 ;
-(id)installedSystemProfileWithIdentifier:(id)arg1 ;
-(id)installedUserProfileWithIdentifier:(id)arg1 ;
-(id)installedProfileDataWithIdentifier:(id)arg1 ;
-(id)_systemManifest;
-(id)_userManifest;
-(id)systemManifest;
-(id)userManifest;
-(id)identifiersOfProfilesWithFilterFlags:(int)arg1 ;
-(void)_setSystemManifest:(id)arg1 userManifest:(id)arg2 ;
-(id)allInstalledProfileIdentifiers;
-(id)allInstalledUserProfileIdentifiers;
-(id)allInstalledSystemProfileIdentifiers;
-(id)allProfileIdentifiersInstalledNonInteractivelyWithFilterFlags:(int)arg1 ;
-(void)addIdentifierToManifest:(id)arg1 flag:(int)arg2 ;
-(void)removeIdentifierFromSystemManifest:(id)arg1 ;
-(void)removeIdentifierFromUserManifest:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)invalidateCache;
@end

