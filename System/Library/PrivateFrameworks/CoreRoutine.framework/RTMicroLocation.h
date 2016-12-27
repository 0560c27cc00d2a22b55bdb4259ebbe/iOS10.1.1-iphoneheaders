/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface RTMicroLocation : NSObject <NSCopying> {

	NSUUID* _identifier;
	double _probability;

}

@property (nonatomic,retain) NSUUID * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double probability;               //@synthesize probability=_probability - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(id)initWithIdentifier:(id)arg1 probability:(double)arg2 ;
-(double)probability;
-(void)setProbability:(double)arg1 ;
-(id)initWithMicroLocationResult:(id)arg1 ;
@end

