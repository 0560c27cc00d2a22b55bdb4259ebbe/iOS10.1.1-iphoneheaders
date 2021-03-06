/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSRegularExpression, NSMutableDictionary;

@interface PLAccountingRuleManager : NSObject {

	NSRegularExpression* _regex;
	NSMutableDictionary* _ruleIDToRule;

}

@property (nonatomic,retain) NSMutableDictionary * ruleIDToRule;              //@synthesize ruleIDToRule=_ruleIDToRule - In the implementation block
@property (nonatomic,retain) NSRegularExpression * regex;                     //@synthesize regex=_regex - In the implementation block
+(id)sharedInstance;
+(id)rulesEntryKey;
+(id)rulesPath;
+(id)firstLineWithFile:(id)arg1 ;
+(id)decryptData:(id)arg1 withKey:(id)arg2 ;
+(id)storedHashDefaults;
-(id)init;
-(NSRegularExpression *)regex;
-(void)setRegex:(NSRegularExpression *)arg1 ;
-(id)ruleForRuleID:(id)arg1 ;
-(void)indexRule:(id)arg1 ;
-(id)ruleWithString:(id)arg1 withEntryDate:(id)arg2 ;
-(void)loadRules;
-(NSMutableDictionary *)ruleIDToRule;
-(id)rulesFromFileWithForceLoad:(BOOL)arg1 ;
-(void)setRuleIDToRule:(NSMutableDictionary *)arg1 ;
@end

