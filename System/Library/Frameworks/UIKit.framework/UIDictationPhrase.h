/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface UIDictationPhrase : NSObject {

	NSString* _text;
	NSArray* _alternativeInterpretations;

}

@property (nonatomic,readonly) NSString * text;                                   //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSArray * alternativeInterpretations;              //@synthesize alternativeInterpretations=_alternativeInterpretations - In the implementation block
+(id)phraseWithText:(id)arg1 alternativeInterpretations:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(NSString *)text;
-(id)initWithText:(id)arg1 alternativeInterpretations:(id)arg2 ;
-(NSArray *)alternativeInterpretations;
@end

