/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHXUserShapes : NSObject
+(void)readFromCharSpaceNode:(xmlNode*)arg1 state:(id)arg2 ;
+(float)readRealCoordinate:(xmlNode*)arg1 ;
+(CGPoint)readRealPoint:(xmlNode*)arg1 ;
+(id)readDrawable:(xmlNode*)arg1 anchor:(id)arg2 drawingState:(id)arg3 ;
+(id)readRelativeSizeAnchor:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)readAbsoluteSizeAnchor:(xmlNode*)arg1 drawingState:(id)arg2 ;
@end

