/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBUserOnboardingScreenView : PBCodable <NSCopying> {

	int _countOfNotificationsSelected;
	int _onboardingScreenType;
	int _previouslyCompletedOnboardingOsVersion;
	NSString* _referringSourceApplication;
	NSString* _referringUrl;
	int _userAction;
	NSString* _userActivityType;
	SCD_Struct_NT1 _has;

}

@property (assign,nonatomic) BOOL hasOnboardingScreenType; 
@property (assign,nonatomic) int onboardingScreenType;                                    //@synthesize onboardingScreenType=_onboardingScreenType - In the implementation block
@property (nonatomic,readonly) BOOL hasReferringSourceApplication; 
@property (nonatomic,retain) NSString * referringSourceApplication;                       //@synthesize referringSourceApplication=_referringSourceApplication - In the implementation block
@property (nonatomic,readonly) BOOL hasReferringUrl; 
@property (nonatomic,retain) NSString * referringUrl;                                     //@synthesize referringUrl=_referringUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasUserActivityType; 
@property (nonatomic,retain) NSString * userActivityType;                                 //@synthesize userActivityType=_userActivityType - In the implementation block
@property (assign,nonatomic) BOOL hasUserAction; 
@property (assign,nonatomic) int userAction;                                              //@synthesize userAction=_userAction - In the implementation block
@property (assign,nonatomic) BOOL hasCountOfNotificationsSelected; 
@property (assign,nonatomic) int countOfNotificationsSelected;                            //@synthesize countOfNotificationsSelected=_countOfNotificationsSelected - In the implementation block
@property (assign,nonatomic) BOOL hasPreviouslyCompletedOnboardingOsVersion; 
@property (assign,nonatomic) int previouslyCompletedOnboardingOsVersion;                  //@synthesize previouslyCompletedOnboardingOsVersion=_previouslyCompletedOnboardingOsVersion - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)userAction;
-(void)setUserAction:(int)arg1 ;
-(void)setHasUserAction:(BOOL)arg1 ;
-(BOOL)hasUserAction;
-(void)setReferringSourceApplication:(NSString *)arg1 ;
-(void)setReferringUrl:(NSString *)arg1 ;
-(void)setUserActivityType:(NSString *)arg1 ;
-(BOOL)hasReferringSourceApplication;
-(BOOL)hasReferringUrl;
-(BOOL)hasUserActivityType;
-(NSString *)referringSourceApplication;
-(NSString *)referringUrl;
-(NSString *)userActivityType;
-(int)onboardingScreenType;
-(void)setOnboardingScreenType:(int)arg1 ;
-(void)setHasOnboardingScreenType:(BOOL)arg1 ;
-(BOOL)hasOnboardingScreenType;
-(void)setCountOfNotificationsSelected:(int)arg1 ;
-(void)setHasCountOfNotificationsSelected:(BOOL)arg1 ;
-(BOOL)hasCountOfNotificationsSelected;
-(int)previouslyCompletedOnboardingOsVersion;
-(void)setPreviouslyCompletedOnboardingOsVersion:(int)arg1 ;
-(void)setHasPreviouslyCompletedOnboardingOsVersion:(BOOL)arg1 ;
-(BOOL)hasPreviouslyCompletedOnboardingOsVersion;
-(int)countOfNotificationsSelected;
@end

