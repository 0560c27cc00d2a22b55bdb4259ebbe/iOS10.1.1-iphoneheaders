/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <mediaremoted/mediaremoted-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSData, NSString, NSMutableDictionary;

@interface MRDRemoteControlCommand : NSObject <NSCopying, NSMutableCopying> {

	unsigned _commandType;
	NSData* _optionsData;
	MROriginRef _origin;
	NSString* _senderAppDisplayID;
	NSString* _destinationAppDisplayID;
	unsigned _appOptions;
	/*^block*/id _completionHandler;
	NSMutableDictionary* _parsedOptionsDict;

}

@property (nonatomic,readonly) unsigned commandType;                                         //@synthesize commandType=_commandType - In the implementation block
@property (nonatomic,readonly) NSData * optionsData; 
@property (nonatomic,readonly) MROriginRef origin;                                           //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) NSString * senderAppDisplayID;                                //@synthesize senderAppDisplayID=_senderAppDisplayID - In the implementation block
@property (nonatomic,readonly) NSString * destinationAppDisplayID;                           //@synthesize destinationAppDisplayID=_destinationAppDisplayID - In the implementation block
@property (nonatomic,readonly) NSString * remoteControlInterfaceID; 
@property (nonatomic,readonly) unsigned appOptions;                                          //@synthesize appOptions=_appOptions - In the implementation block
@property (nonatomic,readonly) NSString * routeUID; 
@property (nonatomic,readonly) NSString * contextID; 
@property (getter=isNavigational,nonatomic,readonly) BOOL navigational; 
@property (getter=isContextSensitive,nonatomic,readonly) BOOL contextSensitive; 
@property (nonatomic,readonly) BOOL shouldImplicitlyLaunchApplication; 
@property (nonatomic,readonly) BOOL originatedFromAccessory; 
@property (getter=isAVRCPCommand,nonatomic,readonly) BOOL avrcpCommand; 
-(unsigned)appOptions;
-(BOOL)shouldImplicitlyLaunchApplication;
-(BOOL)isContextSensitive;
-(BOOL)isNavigational;
-(NSString *)senderAppDisplayID;
-(BOOL)isAVRCPCommand;
-(id)initWithCommandType:(unsigned)arg1 origin:(MROriginRef)arg2 senderAppDisplayID:(id)arg3 optionsData:(id)arg4 ;
-(id)initWithProtocolMessage:(id)arg1 ;
-(BOOL)originatedFromAccessory;
-(id)optionValueForKey:(CFStringRef)arg1 ;
-(NSString *)remoteControlInterfaceID;
-(void)dealloc;
-(id)description;
-(/*^block*/id)_completionHandler;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_setCompletionHandler:(/*^block*/id)arg1 ;
-(MROriginRef)origin;
-(NSString *)contextID;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)_optionsDictionary;
-(NSString *)destinationAppDisplayID;
-(id)_copyWithZone:(NSZone*)arg1 usingConcreteClass:(Class)arg2 ;
-(NSString *)routeUID;
-(NSData *)optionsData;
-(unsigned)commandType;
@end

