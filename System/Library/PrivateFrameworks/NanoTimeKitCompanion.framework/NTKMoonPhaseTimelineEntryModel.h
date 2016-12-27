/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class NSString, NSDate;

@interface NTKMoonPhaseTimelineEntryModel : NTKTimelineEntryModel {

	BOOL _currentEvent;
	NSString* _phaseName;
	unsigned long long _phaseNumber;
	long long _hemisphere;
	long long _event;
	NSDate* _eventDate;
	NSString* _animationGroup;

}

@property (nonatomic,retain) NSString * phaseName;                        //@synthesize phaseName=_phaseName - In the implementation block
@property (assign,nonatomic) unsigned long long phaseNumber;              //@synthesize phaseNumber=_phaseNumber - In the implementation block
@property (assign,nonatomic) long long hemisphere;                        //@synthesize hemisphere=_hemisphere - In the implementation block
@property (assign,nonatomic) long long event;                             //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) NSDate * eventDate;                          //@synthesize eventDate=_eventDate - In the implementation block
@property (assign,nonatomic) BOOL currentEvent;                           //@synthesize currentEvent=_currentEvent - In the implementation block
@property (nonatomic,retain) NSString * animationGroup;                   //@synthesize animationGroup=_animationGroup - In the implementation block
+(id)imageProviderWithOnePieceImage:(id)arg1 ;
+(id)largeModular:(id)arg1 ;
+(id)largeUtility:(id)arg1 ;
+(id)smallModular:(id)arg1 ;
+(id)smallUtility:(id)arg1 ;
+(id)circular:(id)arg1 isMedium:(BOOL)arg2 ;
+(id)extraLarge:(id)arg1 ;
+(id)providerWithText:(id)arg1 ;
+(id)textForMoonPhaseEvent:(long long)arg1 ;
+(id)textForMoonPhaseEvent:(long long)arg1 useShort:(BOOL)arg2 ;
-(long long)event;
-(void)setEvent:(long long)arg1 ;
-(BOOL)currentEvent;
-(void)setEventDate:(NSDate *)arg1 ;
-(NSDate *)eventDate;
-(id)templateForComplicationFamily:(long long)arg1 ;
-(void)setPhaseNumber:(unsigned long long)arg1 ;
-(void)setHemisphere:(long long)arg1 ;
-(void)setPhaseName:(NSString *)arg1 ;
-(NSString *)phaseName;
-(unsigned long long)phaseNumber;
-(long long)hemisphere;
-(void)setCurrentEvent:(BOOL)arg1 ;
-(NSString *)animationGroup;
-(void)setAnimationGroup:(NSString *)arg1 ;
@end

