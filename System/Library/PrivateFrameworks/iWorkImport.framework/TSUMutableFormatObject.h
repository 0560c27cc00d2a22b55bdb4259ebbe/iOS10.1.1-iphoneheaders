/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSUFormatObject.h>
#import <iWorkImport/TSCHCustomFormatUpdateSupport.h>

@interface TSUMutableFormatObject : TSUFormatObject <TSCHCustomFormatUpdateSupport>

@property (assign,nonatomic) SCD_Struct_TS49 formatStruct; 
-(void)remapCustomFormatKeysWithOldToNewKeyMap:(id)arg1 ;
-(void)updateAfterPasteForDocumentRoot:(id)arg1 pasteboardCustomFormatList:(id)arg2 ;
-(void)upgradePreU2_0CustomFormatsForDocumentRoot:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFormatStruct:(SCD_Struct_TS49)arg1 ;
@end

