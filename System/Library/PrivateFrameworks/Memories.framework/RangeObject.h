/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Memories/Memories-Structs.h>
@interface RangeObject : NSObject {

	SCD_Struct_Ra23 _range;

}

@property (nonatomic,readonly) SCD_Struct_Ra23 range;              //@synthesize range=_range - In the implementation block
+(id)rangesFromIndexSet:(id)arg1 ;
+(id)rangeObjectWithRange:(SCD_Struct_Ra23)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(long long)compare:(id)arg1 ;
-(SCD_Struct_Ra23)range;
-(void)setRange:(SCD_Struct_Ra23)arg1 ;
-(id)initWithRange:(SCD_Struct_Ra23)arg1 ;
@end
