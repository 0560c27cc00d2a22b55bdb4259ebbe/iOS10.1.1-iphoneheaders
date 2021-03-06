/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKSelection.h>

@class TNSheet;

@interface TNSheetSelection : TSKSelection {

	BOOL mIsPaginated;
	TNSheet* mSheet;

}

@property (nonatomic,retain,readonly) TNSheet * sheet; 
@property (getter=isPaginated,nonatomic,readonly) BOOL paginated; 
+(Class)archivedSelectionClass;
+(id)selectionForSheet:(id)arg1 paginated:(BOOL)arg2 ;
-(id)UUIDDescription;
-(BOOL)isPaginated;
-(id)initWithSheet:(id)arg1 paginated:(BOOL)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TNSheet *)sheet;
@end

