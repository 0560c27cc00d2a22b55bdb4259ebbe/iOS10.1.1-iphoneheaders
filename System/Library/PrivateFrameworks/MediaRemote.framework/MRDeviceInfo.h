/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString;

@interface MRDeviceInfo : NSObject <NSMutableCopying> {

	NSString* _uniqueIdentifier;
	NSString* _name;
	NSString* _localizedModelName;
	NSString* _systemBuildVersion;
	NSString* _applicationBundleIdentifier;
	NSString* _applicationBundleVersion;
	unsigned long long _protocolVersion;
	BOOL _pairingAllowed;

}

@property (nonatomic,readonly) NSString * uniqueIdentifier;                              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * localizedModelName;                            //@synthesize localizedModelName=_localizedModelName - In the implementation block
@property (nonatomic,readonly) NSString * systemBuildVersion;                            //@synthesize systemBuildVersion=_systemBuildVersion - In the implementation block
@property (nonatomic,readonly) NSString * applicationBundleIdentifier;                   //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * applicationBundleVersion;                      //@synthesize applicationBundleVersion=_applicationBundleVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long protocolVersion;                       //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (getter=isPairingAllowed,nonatomic,readonly) BOOL pairingAllowed;              //@synthesize pairingAllowed=_pairingAllowed - In the implementation block
+(id)currentDeviceInfo;
+(id)_persistentDeviceID;
+(id)_persistentDeviceIDFromFile:(id)arg1 ;
+(double)processorTimeScale;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)uniqueIdentifier;
-(unsigned long long)protocolVersion;
-(NSString *)localizedModelName;
-(NSString *)applicationBundleVersion;
-(BOOL)isPairingAllowed;
-(id)_copyWithZone:(NSZone*)arg1 usingConcreteClass:(Class)arg2 ;
-(NSString *)systemBuildVersion;
-(NSString *)applicationBundleIdentifier;
@end

