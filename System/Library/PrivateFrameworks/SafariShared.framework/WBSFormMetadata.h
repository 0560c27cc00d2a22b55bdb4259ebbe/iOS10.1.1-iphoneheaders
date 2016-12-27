/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSURL, NSArray;

@interface WBSFormMetadata : NSObject {

	BOOL _allowsAutocomplete;
	BOOL _containsActiveElement;
	BOOL _bestForCredentialPreFill;
	BOOL _bestForPageLevelAutoFill;
	BOOL _visible;
	BOOL _usesRelAsync;
	BOOL _usesGeneratedPassword;
	BOOL _isSearchForm;
	NSDictionary* _annotations;
	unsigned long long _type;
	NSString* _confirmPasswordElementUniqueID;
	NSString* _firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID;
	NSURL* _action;
	NSArray* _controls;
	long long _uniqueID;
	NSString* _oldPasswordElementUniqueID;
	NSString* _passwordElementUniqueID;
	NSDictionary* _radioButtonInfo;
	NSString* _textSample;
	NSString* _userNameElementUniqueID;
	unsigned long long _requestType;

}

@property (nonatomic,readonly) BOOL allowsAutocomplete;                                                                    //@synthesize allowsAutocomplete=_allowsAutocomplete - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * annotations;                                                            //@synthesize annotations=_annotations - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * confirmPasswordElementUniqueID;                                             //@synthesize confirmPasswordElementUniqueID=_confirmPasswordElementUniqueID - In the implementation block
@property (nonatomic,readonly) BOOL containsActiveElement;                                                                 //@synthesize containsActiveElement=_containsActiveElement - In the implementation block
@property (nonatomic,copy,readonly) NSString * firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID;              //@synthesize firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID=_firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID - In the implementation block
@property (nonatomic,readonly) NSURL * action;                                                                             //@synthesize action=_action - In the implementation block
@property (nonatomic,copy,readonly) NSArray * controls;                                                                    //@synthesize controls=_controls - In the implementation block
@property (nonatomic,readonly) long long uniqueID;                                                                         //@synthesize uniqueID=_uniqueID - In the implementation block
@property (getter=isBestForCredentialPreFill,nonatomic,readonly) BOOL bestForCredentialPreFill;                            //@synthesize bestForCredentialPreFill=_bestForCredentialPreFill - In the implementation block
@property (getter=isBestForPageLevelAutoFill,nonatomic,readonly) BOOL bestForPageLevelAutoFill;                            //@synthesize bestForPageLevelAutoFill=_bestForPageLevelAutoFill - In the implementation block
@property (getter=isVisible,nonatomic,readonly) BOOL visible;                                                              //@synthesize visible=_visible - In the implementation block
@property (nonatomic,readonly) BOOL usesRelAsync;                                                                          //@synthesize usesRelAsync=_usesRelAsync - In the implementation block
@property (nonatomic,copy,readonly) NSString * oldPasswordElementUniqueID;                                                 //@synthesize oldPasswordElementUniqueID=_oldPasswordElementUniqueID - In the implementation block
@property (nonatomic,copy,readonly) NSString * passwordElementUniqueID;                                                    //@synthesize passwordElementUniqueID=_passwordElementUniqueID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * radioButtonInfo;                                                        //@synthesize radioButtonInfo=_radioButtonInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * textSample;                                                                 //@synthesize textSample=_textSample - In the implementation block
@property (nonatomic,copy,readonly) NSString * userNameElementUniqueID;                                                    //@synthesize userNameElementUniqueID=_userNameElementUniqueID - In the implementation block
@property (nonatomic,readonly) BOOL usesGeneratedPassword;                                                                 //@synthesize usesGeneratedPassword=_usesGeneratedPassword - In the implementation block
@property (nonatomic,readonly) unsigned long long requestType;                                                             //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,readonly) BOOL isSearchForm;                                                                          //@synthesize isSearchForm=_isSearchForm - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
-(unsigned long long)type;
-(NSURL *)action;
-(BOOL)isVisible;
-(NSDictionary *)dictionaryRepresentation;
-(long long)uniqueID;
-(id)initWithJSValue:(id)arg1 ;
-(BOOL)allowsAutocomplete;
-(NSString *)confirmPasswordElementUniqueID;
-(BOOL)containsActiveElement;
-(NSString *)firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID;
-(NSArray *)controls;
-(BOOL)isBestForCredentialPreFill;
-(BOOL)isBestForPageLevelAutoFill;
-(BOOL)usesRelAsync;
-(NSString *)oldPasswordElementUniqueID;
-(NSString *)passwordElementUniqueID;
-(NSDictionary *)radioButtonInfo;
-(NSString *)textSample;
-(NSString *)userNameElementUniqueID;
-(BOOL)usesGeneratedPassword;
-(BOOL)isSearchForm;
-(unsigned long long)requestType;
-(NSDictionary *)annotations;
@end

