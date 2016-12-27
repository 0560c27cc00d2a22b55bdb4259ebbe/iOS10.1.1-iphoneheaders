/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSString;

@interface MPRemoteControlOrigin : NSObject {

	MROriginRef _origin;

}

@property (nonatomic,readonly) MROriginRef origin;                                 //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) long long type; 
@property (getter=isLocalOrigin,nonatomic,readonly) BOOL localOrigin; 
+(id)localOrigin;
+(void)getRemoteControlOriginsWithCompletion:(/*^block*/id)arg1 ;
+(void)getActiveOriginWithCompletion:(/*^block*/id)arg1 ;
+(void)beginListeningForOriginNotifications;
+(void)endListeningForOriginNotifications;
-(void)dealloc;
-(NSString *)name;
-(long long)type;
-(MROriginRef)origin;
-(id)initWithMROrigin:(MROriginRef)arg1 ;
-(BOOL)isLocalOrigin;
@end
