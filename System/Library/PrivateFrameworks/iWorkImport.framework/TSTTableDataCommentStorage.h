/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSTTableDataObject.h>

@class TSDCommentStorage;

@interface TSTTableDataCommentStorage : TSTTableDataObject {

	TSDCommentStorage* mCommentStorage;

}

@property (nonatomic,readonly) TSDCommentStorage * commentStorage; 
-(id)initObjectWithCommentStorage:(id)arg1 refCount:(unsigned)arg2 ;
-(TSDCommentStorage *)commentStorage;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

