/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPShapeInfo.h>

@interface KNPlaceholderInfo : TSWPShapeInfo
+(id)newObjectForUnarchiver:(id)arg1 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(PlaceholderArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const PlaceholderArchive*)arg1 unarchiver:(id)arg2 ;
-(Class)repClass;
-(BOOL)autoListRecognition;
-(BOOL)autoListTermination;
-(BOOL)shouldHideEmptyBullets;
-(BOOL)displaysInstructionalText;
-(id)instructionalText;
-(id)copyAsShapeInfoWithContext:(id)arg1 ;
-(int)kind;
-(Class)layoutClass;
@end

