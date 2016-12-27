/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class GQDSStyle, GQDWPLayoutStorage;

@interface GQDWPLayoutFrame : NSObject {

	char* mStyleRef;
	GQDSStyle* mStyle;
	GQDWPLayoutStorage* mStorage;
	unsigned mTextScale;

}
-(int)readAttributesFromReader:(xmlTextReaderRef)arg1 ;
-(void)resolveStyleRef;
-(id)storage;
-(void)dealloc;
-(id)layoutStyle;
-(unsigned)textScale;
-(BOOL)isBlank;
@end

