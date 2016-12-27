/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSUSparseArray : NSObject <NSCopying> {

	tsuSaPage* _topPage;
	unsigned long long _nonNilCount;
	unsigned _depth;

}

@property (readonly) unsigned long long count; 
-(unsigned long long)maxIndexForCurrentDepth;
-(void)increaseDepth;
-(BOOL)hasObjectForKey:(unsigned long long)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)description;
-(id)objectForKey:(unsigned long long)arg1 ;
-(void)removeObjectForKey:(unsigned long long)arg1 ;
-(void)setObject:(id)arg1 forKey:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clear;
-(void)foreach:(/*^block*/id)arg1 ;
@end

