/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/EDCollection.h>

@interface EDStylesCollection : EDCollection {

	unsigned long long mDefaultWorkbookStyleIndex;

}
-(id)init;
-(unsigned long long)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(id)defaultWorkbookStyle;
-(void)setDefaultWorkbookStyleIndex:(unsigned long long)arg1 ;
-(unsigned long long)defaultWorkbookStyleIndex;
@end

