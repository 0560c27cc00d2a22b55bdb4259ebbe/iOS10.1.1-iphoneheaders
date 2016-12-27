/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OITSUNoCopyDictionary, NSMutableArray;

@interface WDFontTable : NSObject {

	OITSUNoCopyDictionary* mFontTable;
	NSMutableArray* mFontsInOrderOfInsertion;

}
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)description;
-(void)clear;
-(id)fontAtIndex:(unsigned long long)arg1 ;
-(id)fonts;
-(id)createFontWithName:(id)arg1 ;
-(unsigned long long)indexOfFont:(id)arg1 ;
-(id)fontWithName:(id)arg1 ;
-(id)fontWithName:(id)arg1 create:(BOOL)arg2 ;
@end

