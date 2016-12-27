/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AXHearingSupport/AXHearingSupport-Structs.h>
@interface TTYUtilities : NSObject {

	BOOL _inUnitTestMode;
	BOOL _headphoneJackSupportsTTY;

}

@property (assign,nonatomic) BOOL headphoneJackSupportsTTY;              //@synthesize headphoneJackSupportsTTY=_headphoneJackSupportsTTY - In the implementation block
@property (assign,nonatomic) BOOL inUnitTestMode;                        //@synthesize inUnitTestMode=_inUnitTestMode - In the implementation block
+(BOOL)ttyShouldBeRealtimeForCall:(id)arg1 ;
+(id)sharedUtilityProvider;
+(BOOL)contactIsTTYContact:(id)arg1 ;
+(BOOL)isAppleInternalBuild;
+(BOOL)relayIsSupported;
+(id)relayPhoneNumber;
+(void)displayCallPromptForContact:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)cancelCallPromptDisplay;
+(void)contactIsTTYContact:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
+(BOOL)hardwareTTYIsSupported;
+(BOOL)softwareTTYIsSupported;
+(id)phoneNumberStringFromString:(id)arg1 ;
-(void)setInUnitTestMode:(BOOL)arg1 ;
-(BOOL)inUnitTestMode;
-(UIEdgeInsets)bubbleInsetForMe:(BOOL)arg1 ;
-(long long)textAlignmentForMe:(BOOL)arg1 ;
-(UIEdgeInsets)textInsetForMe:(BOOL)arg1 ;
-(id)bubbleFillForMe:(BOOL)arg1 ;
-(id)myPhoneNumber;
-(void)setTTYDictionaryAvailability:(BOOL)arg1 ;
-(id)conversationForCallUID:(id)arg1 ;
-(BOOL)deleteConversationWithCallUID:(id)arg1 ;
-(BOOL)contactIsTTYContact:(id)arg1 ;
-(unsigned long long)currentPreferredTransportMethod;
-(id)ttyIconWithTint:(id)arg1 ;
-(id)bubbleColorForMe:(BOOL)arg1 ;
-(id)ttyMeContact;
-(id)largeTTYIconWithTint:(id)arg1 ;
-(id)tintedTTYIcon;
-(BOOL)headphoneJackSupportsTTY;
-(void)setHeadphoneJackSupportsTTY:(BOOL)arg1 ;
@end

