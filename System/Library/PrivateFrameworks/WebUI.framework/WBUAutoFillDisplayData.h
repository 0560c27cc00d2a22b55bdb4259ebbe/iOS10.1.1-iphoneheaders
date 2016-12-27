/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, CNContact, NSArray;

@interface WBUAutoFillDisplayData : NSObject {

	NSString* _label;
	CNContact* _contact;
	NSArray* _fillMatches;
	NSArray* _skipMatches;

}

@property (nonatomic,retain) NSString * label;                               //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) CNContact * contact;                          //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) NSString * headerString; 
@property (nonatomic,readonly) NSString * displayString; 
@property (nonatomic,readonly) NSString * valueString; 
@property (nonatomic,readonly) NSString * valueWithLabelString; 
@property (nonatomic,copy,readonly) NSArray * fillMatches;                   //@synthesize fillMatches=_fillMatches - In the implementation block
@property (nonatomic,copy,readonly) NSArray * skipMatches;                   //@synthesize skipMatches=_skipMatches - In the implementation block
-(NSString *)displayString;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)valueString;
-(CNContact *)contact;
-(id)fillAndSkipString;
-(id)addressStringForLabel:(id)arg1 ;
-(id)initWithLabel:(id)arg1 contact:(id)arg2 fillMatches:(id)arg3 skipMatches:(id)arg4 ;
-(NSString *)valueWithLabelString;
-(NSArray *)fillMatches;
-(NSArray *)skipMatches;
-(NSString *)headerString;
@end
