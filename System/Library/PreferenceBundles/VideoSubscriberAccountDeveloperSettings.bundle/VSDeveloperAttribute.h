/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/VideoSubscriberAccountDeveloperSettings.bundle/VideoSubscriberAccountDeveloperSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSValueTransformer;

@interface VSDeveloperAttribute : NSObject {

	NSString* _displayName;
	NSString* _placeholder;
	NSString* _keyPath;
	long long _autocorrectionType;
	long long _spellCheckingType;
	long long _keyboardType;
	NSValueTransformer* _valueTransformer;

}

@property (nonatomic,copy) NSString * displayName;                               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                               //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,copy) NSString * keyPath;                                   //@synthesize keyPath=_keyPath - In the implementation block
@property (assign,nonatomic) long long autocorrectionType;                       //@synthesize autocorrectionType=_autocorrectionType - In the implementation block
@property (assign,nonatomic) long long spellCheckingType;                        //@synthesize spellCheckingType=_spellCheckingType - In the implementation block
@property (assign,nonatomic) long long keyboardType;                             //@synthesize keyboardType=_keyboardType - In the implementation block
@property (nonatomic,retain) NSValueTransformer * valueTransformer;              //@synthesize valueTransformer=_valueTransformer - In the implementation block
+(id)standardAttributes;
-(id)init;
-(NSString *)keyPath;
-(void)setKeyPath:(NSString *)arg1 ;
-(long long)autocorrectionType;
-(void)setAutocorrectionType:(long long)arg1 ;
-(long long)spellCheckingType;
-(void)setSpellCheckingType:(long long)arg1 ;
-(long long)keyboardType;
-(void)setKeyboardType:(long long)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)placeholder;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSValueTransformer *)valueTransformer;
-(void)setValueTransformer:(NSValueTransformer *)arg1 ;
@end

