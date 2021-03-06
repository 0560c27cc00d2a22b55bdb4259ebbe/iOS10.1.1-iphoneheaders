/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSString;

@interface TSCEReference : NSObject {

	TSCECReference* mRef;
	NSString* mOverrideText;
	NSString* mOverrideTextAsTyped;
	unsigned char mStickyBits;
	BOOL mWasConstructedViaNames;

}
-(id)referenceTextWithCalculationEngine:(id)arg1 hostTableID:(CFUUIDRef)arg2 ;
-(SCD_Struct_TS360*)rangeReference;
-(id)initWithRangeReference:(SCD_Struct_TS360*)arg1 ;
-(id)initWithCellReference:(SCD_Struct_TS361*)arg1 ;
-(void)setWasConstructedViaNames:(BOOL)arg1 ;
-(void)setOverrideText:(id)arg1 ;
-(void)setStickyBits:(unsigned char)arg1 ;
-(void)setOverrideTextAsTyped:(id)arg1 ;
-(unsigned char)stickyBits;
-(id)referenceTextForAutocompleteWithCalculationEngine:(id)arg1 hostTableID:(CFUUIDRef)arg2 stickyBits:(unsigned char)arg3 inputString:(id)arg4 inputStringIsComplete:(BOOL)arg5 ;
-(id)referenceTextForAutocompleteWithCalculationEngine:(id)arg1 contextSheetName:(id)arg2 stickyBits:(unsigned char)arg3 inputString:(id)arg4 inputStringIsComplete:(BOOL)arg5 ;
-(id)referenceTextWithCalculationEngine:(id)arg1 contextSheetName:(id)arg2 ;
-(BOOL)wasConstructedViaNames;
-(TSCECReference*)cReference;
-(id)p_stringByUnescapingQuotedStringWithPossibleDollarPrefix:(id)arg1 partial:(BOOL)arg2 ;
-(id)overrideText;
-(id)overrideTextAsTyped;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(CFUUIDRef)tableID;
@end

