/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PVEffect, NSString, UIColor, NSDictionary;

@interface TitleDefinition : NSObject <NSCopying> {

	BOOL _durationExplicitlySet;
	BOOL _anchorTargetOffsetExplicitlySet;
	BOOL _anchorLocalOffsetExplicitlySet;
	BOOL _audioEnabled;
	int _duration;
	int _anchorTargetOffset;
	int _anchorLocalOffset;
	int _introFadeDuration;
	int _outroFadeDuration;
	PVEffect* _titleEffect;
	NSString* _titleName;
	NSString* _text;
	NSString* _text2;
	NSString* _text3;
	UIColor* _backgroundColor;
	UIColor* _primaryColor;
	UIColor* _secondaryColor;
	NSDictionary* _extendedDefinition;
	NSDictionary* _titleEffectSettings;

}

@property (nonatomic,readonly) int titleGroup; 
@property (nonatomic,readonly) int titleType; 
@property (nonatomic,readonly) NSString * displayName; 
@property (getter=isGeneric,nonatomic,readonly) BOOL generic; 
@property (getter=isMotion,nonatomic,readonly) BOOL motion; 
@property (nonatomic,retain) NSString * titleName;                                                                       //@synthesize titleName=_titleName - In the implementation block
@property (nonatomic,retain) NSString * text;                                                                            //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSString * text2;                                                                           //@synthesize text2=_text2 - In the implementation block
@property (nonatomic,retain) NSString * text3;                                                                           //@synthesize text3=_text3 - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                                                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * primaryColor;                                                                     //@synthesize primaryColor=_primaryColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryColor;                                                                   //@synthesize secondaryColor=_secondaryColor - In the implementation block
@property (assign,nonatomic) int duration;                                                                               //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) int anchorTargetOffset;                                                                     //@synthesize anchorTargetOffset=_anchorTargetOffset - In the implementation block
@property (assign,nonatomic) int anchorLocalOffset;                                                                      //@synthesize anchorLocalOffset=_anchorLocalOffset - In the implementation block
@property (assign,nonatomic) int introFadeDuration;                                                                      //@synthesize introFadeDuration=_introFadeDuration - In the implementation block
@property (assign,nonatomic) int outroFadeDuration;                                                                      //@synthesize outroFadeDuration=_outroFadeDuration - In the implementation block
@property (assign,getter=isDurationExplicitlySet,nonatomic) BOOL durationExplicitlySet;                                  //@synthesize durationExplicitlySet=_durationExplicitlySet - In the implementation block
@property (assign,getter=isAnchorTargetOffsetExplicitlySet,nonatomic) BOOL anchorTargetOffsetExplicitlySet;              //@synthesize anchorTargetOffsetExplicitlySet=_anchorTargetOffsetExplicitlySet - In the implementation block
@property (assign,getter=isAnchorLocalOffsetExplicitlySet,nonatomic) BOOL anchorLocalOffsetExplicitlySet;                //@synthesize anchorLocalOffsetExplicitlySet=_anchorLocalOffsetExplicitlySet - In the implementation block
@property (nonatomic,retain) NSDictionary * extendedDefinition;                                                          //@synthesize extendedDefinition=_extendedDefinition - In the implementation block
@property (assign,nonatomic) BOOL audioEnabled;                                                                          //@synthesize audioEnabled=_audioEnabled - In the implementation block
@property (nonatomic,readonly) int animationOutDuration; 
@property (nonatomic,readonly) int nominalOverallDuration; 
@property (nonatomic,readonly) PVEffect * titleEffect;                                                                   //@synthesize titleEffect=_titleEffect - In the implementation block
@property (nonatomic,copy,readonly) NSString * titleEffectID; 
@property (nonatomic,copy) NSDictionary * titleEffectSettings;                                                           //@synthesize titleEffectSettings=_titleEffectSettings - In the implementation block
+(id)objectFromPlist:(id)arg1 inProject:(id)arg2 ;
+(int)titleGroupForTitleName:(id)arg1 ;
+(int)titleTypeForTitleName:(id)arg1 ;
+(id)displayNameForTitleName:(id)arg1 ;
+(id)effectIDForTitleName:(id)arg1 ;
+(id)titleStyleRootForTitleName:(id)arg1 ;
+(id)titleStyleDisplayNameForTitleName:(id)arg1 themeID:(id)arg2 ;
+(id)titleDefinitionPlaceholderForTheme:(id)arg1 ;
+(id)titleNameFromTitleStyleRoot:(id)arg1 titleType:(int)arg2 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(id)description;
-(int)duration;
-(void)setDuration:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIColor *)primaryColor;
-(NSString *)displayName;
-(void)setPrimaryColor:(UIColor *)arg1 ;
-(void)setSecondaryColor:(UIColor *)arg1 ;
-(UIColor *)secondaryColor;
-(void)setAudioEnabled:(BOOL)arg1 ;
-(BOOL)audioEnabled;
-(NSDictionary *)titleEffectSettings;
-(id)initWithTitleName:(id)arg1 ;
-(void)setTitleEffectSettings:(NSDictionary *)arg1 ;
-(void)setText2:(NSString *)arg1 ;
-(void)setText3:(NSString *)arg1 ;
-(NSString *)text2;
-(PVEffect *)titleEffect;
-(void)setOutroFadeDuration:(int)arg1 ;
-(id)plistRepresentation;
-(NSString *)titleName;
-(BOOL)isAnchorTargetOffsetExplicitlySet;
-(int)anchorTargetOffset;
-(void)setAnchorTargetOffset:(int)arg1 ;
-(BOOL)isAnchorLocalOffsetExplicitlySet;
-(void)setAnchorLocalOffset:(int)arg1 ;
-(int)anchorLocalOffset;
-(NSString *)titleEffectID;
-(int)titleGroup;
-(void)setDurationExplicitlySet:(BOOL)arg1 ;
-(void)setAnchorTargetOffsetExplicitlySet:(BOOL)arg1 ;
-(void)setAnchorLocalOffsetExplicitlySet:(BOOL)arg1 ;
-(int)outroFadeDuration;
-(NSString *)text3;
-(BOOL)isDurationExplicitlySet;
-(int)introFadeDuration;
-(NSDictionary *)extendedDefinition;
-(void)setTitleName:(NSString *)arg1 ;
-(void)setIntroFadeDuration:(int)arg1 ;
-(void)setExtendedDefinition:(NSDictionary *)arg1 ;
-(int)titleType;
-(BOOL)isGeneric;
-(BOOL)isMotion;
-(void)updateWithTitleDefinition:(id)arg1 ;
-(int)animationOutDuration;
-(int)nominalOverallDuration;
@end

