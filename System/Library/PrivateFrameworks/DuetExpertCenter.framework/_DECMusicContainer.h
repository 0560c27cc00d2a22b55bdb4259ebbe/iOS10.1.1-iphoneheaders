/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface _DECMusicContainer : NSObject <NSSecureCoding> {

	NSString* _bundleId;
	NSString* _trackIdentifier;
	NSDate* _playTime;
	NSDate* _pauseTime;

}

@property (nonatomic,readonly) NSString * bundleId;                     //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) NSString * trackIdentifier;              //@synthesize trackIdentifier=_trackIdentifier - In the implementation block
@property (nonatomic,readonly) NSDate * playTime;                       //@synthesize playTime=_playTime - In the implementation block
@property (nonatomic,readonly) NSDate * pauseTime;                      //@synthesize pauseTime=_pauseTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)bundleId;
-(NSDate *)pauseTime;
-(void)setPauseIfUnset;
-(void)setPlayingWithBundleId:(id)arg1 trackIdentifier:(id)arg2 playTime:(id)arg3 ;
-(NSString *)trackIdentifier;
-(NSDate *)playTime;
@end

