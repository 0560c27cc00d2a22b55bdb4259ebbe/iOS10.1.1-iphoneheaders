/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXTextParaPropertyBag : NSObject
+(void)readParagraphProperties:(xmlNode*)arg1 paragraphProperties:(id)arg2 drawingState:(id)arg3 ;
+(void)readAlign:(id)arg1 paragraphProperties:(id)arg2 ;
+(void)readFontAlign:(id)arg1 paragraphProperties:(id)arg2 ;
+(id)readSpacing:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(void)readTabList:(xmlNode*)arg1 paragraphProperties:(id)arg2 drawingState:(id)arg3 ;
+(int)readBulletScheme:(id)arg1 ;
@end

