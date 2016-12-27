/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OITSURectList : NSObject {

	vector<CGRect, std::__1::allocator<CGRect> >* mRectList;

}

@property (nonatomic,readonly) unsigned long long count; 
+(id)rectListWithDifference:(CGRect)arg1 withRect:(CGRect)arg2 ;
-(unsigned long long)count;
-(void)addRect:(CGRect)arg1 ;
-(CGRect)rectAtIndex:(unsigned long long)arg1 ;
-(id)initWithRect:(CGRect)arg1 ;
-(id)initWithRectList:(id)arg1 ;
-(void)insertRect:(CGRect)arg1 atIndex:(unsigned long long)arg2 ;
@end

