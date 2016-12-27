/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSURangeList : NSObject {

	vector<_NSRange, std::__1::allocator<_NSRange> >* mRangeList;

}

@property (nonatomic,readonly) unsigned long long count; 
-(unsigned long long)count;
-(id)initWithString:(id)arg1 ;
-(id)stringValue;
-(NSRange)rangeAtIndex:(unsigned long long)arg1 ;
-(id)initWithRange:(NSRange)arg1 ;
-(id)initWithRangeList:(id)arg1 ;
-(void)addRange:(NSRange)arg1 ;
-(void)insertRange:(NSRange)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeRangeAtIndex:(unsigned long long)arg1 ;
-(void)replaceWithRange:(NSRange)arg1 atIndex:(unsigned long long)arg2 ;
-(void)reverse;
-(void)consolidate;
@end

