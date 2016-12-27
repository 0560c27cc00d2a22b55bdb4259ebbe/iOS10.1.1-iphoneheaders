/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathArrayExpression.h>

@interface SCRCMathRowExpression : SCRCMathArrayExpression
-(long long)integerValue;
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2 ;
-(id)latexDescriptionInMathMode:(BOOL)arg1 ;
-(unsigned long long)fractionLevel;
-(id)speakableSummary;
-(BOOL)canBeUsedWithRange;
-(BOOL)canBeUsedWithBase;
-(BOOL)isFunctionName;
-(BOOL)isWordOrAbbreviation;
-(BOOL)beginsWithSpace;
-(BOOL)endsWithSpace;
-(id)childSpeakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 parentTreePosition:(id)arg3 childIndex:(unsigned long long*)arg4 ;
-(id)_indexesOfCharactersInWords;
-(void)_addSpacingAndChild:(id)arg1 toResult:(id)arg2 nextChild:(id)arg3 previousChild:(id)arg4 numberOfOuterRadicals:(unsigned long long)arg5 treePosition:(id)arg6 ;
-(id)mathMLTag;
-(BOOL)isInteger;
-(BOOL)isNumber;
@end

