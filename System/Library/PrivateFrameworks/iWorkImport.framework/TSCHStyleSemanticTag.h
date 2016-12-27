/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSCHStyleSemanticTag : NSObject <NSCopying> {

	int mType;
	unsigned long long mIndex;

}

@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) unsigned long long index; 
@property (nonatomic,readonly) BOOL isSeries; 
@property (nonatomic,readonly) BOOL isReferenceLine; 
+(id)styleSemanticTagWithType:(int)arg1 index:(unsigned long long)arg2 ;
-(id)initWithType:(int)arg1 index:(unsigned long long)arg2 ;
-(BOOL)isSeries;
-(BOOL)isReferenceLine;
-(Class)styleClass;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)index;
@end

