/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber, NSString;


@protocol INSetRadioStationIntentExport <NSObject,JSExport>
@property (assign,nonatomic) long long radioType; 
@property (nonatomic,copy) NSNumber * frequency; 
@property (nonatomic,copy) NSString * stationName; 
@property (nonatomic,copy) NSString * channel; 
@property (nonatomic,copy) NSNumber * presetNumber; 
@required
-(id)init;
-(NSNumber *)frequency;
-(void)setFrequency:(id)arg1;
-(void)setChannel:(id)arg1;
-(NSString *)channel;
-(void)setStationName:(id)arg1;
-(void)setRadioType:(long long)arg1;
-(void)setPresetNumber:(id)arg1;
-(long long)radioType;
-(NSString *)stationName;
-(NSNumber *)presetNumber;

@end

