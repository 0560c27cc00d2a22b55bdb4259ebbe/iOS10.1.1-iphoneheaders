/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallAction.h>

@class CXHandle, NSString, NSDate;

@interface CXStartCallAction : CXCallAction {

	BOOL _video;
	BOOL _relay;
	BOOL _upgrade;
	BOOL _emergency;
	BOOL _voicemail;
	CXHandle* _handle;
	NSString* _contactIdentifier;
	NSDate* _dateStarted;
	long long _ttyType;
	CGSize _localLandscapeAspectRatio;
	CGSize _localPortraitAspectRatio;

}

@property (nonatomic,copy) NSDate * dateStarted;                                //@synthesize dateStarted=_dateStarted - In the implementation block
@property (assign,getter=isRelay,nonatomic) BOOL relay;                         //@synthesize relay=_relay - In the implementation block
@property (assign,getter=isUpgrade,nonatomic) BOOL upgrade;                     //@synthesize upgrade=_upgrade - In the implementation block
@property (assign,getter=isEmergency,nonatomic) BOOL emergency;                 //@synthesize emergency=_emergency - In the implementation block
@property (assign,getter=isVoicemail,nonatomic) BOOL voicemail;                 //@synthesize voicemail=_voicemail - In the implementation block
@property (assign,setter=setTTYType:,nonatomic) long long ttyType;              //@synthesize ttyType=_ttyType - In the implementation block
@property (assign,nonatomic) CGSize localLandscapeAspectRatio;                  //@synthesize localLandscapeAspectRatio=_localLandscapeAspectRatio - In the implementation block
@property (assign,nonatomic) CGSize localPortraitAspectRatio;                   //@synthesize localPortraitAspectRatio=_localPortraitAspectRatio - In the implementation block
@property (nonatomic,copy) CXHandle * handle;                                   //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy) NSString * contactIdentifier;                        //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (assign,getter=isVideo,nonatomic) BOOL video;                         //@synthesize video=_video - In the implementation block
+(BOOL)supportsSecureCoding;
+(double)timeout;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isVideo;
-(id)customDescription;
-(NSString *)contactIdentifier;
-(BOOL)isVoicemail;
-(CGSize)localLandscapeAspectRatio;
-(void)setLocalLandscapeAspectRatio:(CGSize)arg1 ;
-(void)setVoicemail:(BOOL)arg1 ;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(void)setVideo:(BOOL)arg1 ;
-(void)setHandle:(CXHandle *)arg1 ;
-(CXHandle *)handle;
-(BOOL)isRelay;
-(void)setLocalPortraitAspectRatio:(CGSize)arg1 ;
-(CGSize)localPortraitAspectRatio;
-(long long)ttyType;
-(void)setTTYType:(long long)arg1 ;
-(void)updateCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(void)fulfill;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(BOOL)isEmergency;
-(void)setEmergency:(BOOL)arg1 ;
-(BOOL)isUpgrade;
-(NSDate *)dateStarted;
-(void)fulfillWithDateStarted:(id)arg1 ;
-(void)updateAsFulfilledWithDateStarted:(id)arg1 ;
-(void)setDateStarted:(NSDate *)arg1 ;
-(void)setRelay:(BOOL)arg1 ;
-(void)setUpgrade:(BOOL)arg1 ;
-(id)initWithCallUUID:(id)arg1 handle:(id)arg2 ;
@end

