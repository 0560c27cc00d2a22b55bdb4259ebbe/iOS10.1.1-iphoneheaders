/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NetworkServiceProxyRespTimeBuckets : NSObject <NSSecureCoding> {

	unsigned _bucket_10_msecs;
	unsigned _bucket_20_msecs;
	unsigned _bucket_30_msecs;
	unsigned _bucket_40_msecs;
	unsigned _bucket_50_msecs;
	unsigned _bucket_60_msecs;
	unsigned _bucket_70_msecs;
	unsigned _bucket_80_msecs;
	unsigned _bucket_90_msecs;
	unsigned _bucket_100_msecs;
	unsigned _bucket_110_msecs;
	unsigned _bucket_120_msecs;
	unsigned _bucket_130_msecs;
	unsigned _bucket_140_msecs;
	unsigned _bucket_150_msecs;
	unsigned _bucket_160_msecs;
	unsigned _bucket_170_msecs;
	unsigned _bucket_180_msecs;
	unsigned _bucket_190_msecs;
	unsigned _bucket_200_msecs;
	unsigned _bucket_250_msecs;
	unsigned _bucket_500_msecs;
	unsigned _bucket_1_sec;
	unsigned _bucket_2_secs;
	unsigned _bucket_5_secs;
	unsigned _bucket_above_5_secs;

}

@property (assign) unsigned bucket_10_msecs;                  //@synthesize bucket_10_msecs=_bucket_10_msecs - In the implementation block
@property (assign) unsigned bucket_20_msecs;                  //@synthesize bucket_20_msecs=_bucket_20_msecs - In the implementation block
@property (assign) unsigned bucket_30_msecs;                  //@synthesize bucket_30_msecs=_bucket_30_msecs - In the implementation block
@property (assign) unsigned bucket_40_msecs;                  //@synthesize bucket_40_msecs=_bucket_40_msecs - In the implementation block
@property (assign) unsigned bucket_50_msecs;                  //@synthesize bucket_50_msecs=_bucket_50_msecs - In the implementation block
@property (assign) unsigned bucket_60_msecs;                  //@synthesize bucket_60_msecs=_bucket_60_msecs - In the implementation block
@property (assign) unsigned bucket_70_msecs;                  //@synthesize bucket_70_msecs=_bucket_70_msecs - In the implementation block
@property (assign) unsigned bucket_80_msecs;                  //@synthesize bucket_80_msecs=_bucket_80_msecs - In the implementation block
@property (assign) unsigned bucket_90_msecs;                  //@synthesize bucket_90_msecs=_bucket_90_msecs - In the implementation block
@property (assign) unsigned bucket_100_msecs;                 //@synthesize bucket_100_msecs=_bucket_100_msecs - In the implementation block
@property (assign) unsigned bucket_110_msecs;                 //@synthesize bucket_110_msecs=_bucket_110_msecs - In the implementation block
@property (assign) unsigned bucket_120_msecs;                 //@synthesize bucket_120_msecs=_bucket_120_msecs - In the implementation block
@property (assign) unsigned bucket_130_msecs;                 //@synthesize bucket_130_msecs=_bucket_130_msecs - In the implementation block
@property (assign) unsigned bucket_140_msecs;                 //@synthesize bucket_140_msecs=_bucket_140_msecs - In the implementation block
@property (assign) unsigned bucket_150_msecs;                 //@synthesize bucket_150_msecs=_bucket_150_msecs - In the implementation block
@property (assign) unsigned bucket_160_msecs;                 //@synthesize bucket_160_msecs=_bucket_160_msecs - In the implementation block
@property (assign) unsigned bucket_170_msecs;                 //@synthesize bucket_170_msecs=_bucket_170_msecs - In the implementation block
@property (assign) unsigned bucket_180_msecs;                 //@synthesize bucket_180_msecs=_bucket_180_msecs - In the implementation block
@property (assign) unsigned bucket_190_msecs;                 //@synthesize bucket_190_msecs=_bucket_190_msecs - In the implementation block
@property (assign) unsigned bucket_200_msecs;                 //@synthesize bucket_200_msecs=_bucket_200_msecs - In the implementation block
@property (assign) unsigned bucket_250_msecs;                 //@synthesize bucket_250_msecs=_bucket_250_msecs - In the implementation block
@property (assign) unsigned bucket_500_msecs;                 //@synthesize bucket_500_msecs=_bucket_500_msecs - In the implementation block
@property (assign) unsigned bucket_1_sec;                     //@synthesize bucket_1_sec=_bucket_1_sec - In the implementation block
@property (assign) unsigned bucket_2_secs;                    //@synthesize bucket_2_secs=_bucket_2_secs - In the implementation block
@property (assign) unsigned bucket_5_secs;                    //@synthesize bucket_5_secs=_bucket_5_secs - In the implementation block
@property (assign) unsigned bucket_above_5_secs;              //@synthesize bucket_above_5_secs=_bucket_above_5_secs - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)clear;
-(void)incrBucketWithCurrentDate:(id)arg1 pastDate:(id)arg2 ;
-(unsigned)bucket_10_msecs;
-(unsigned)bucket_20_msecs;
-(unsigned)bucket_30_msecs;
-(unsigned)bucket_40_msecs;
-(unsigned)bucket_50_msecs;
-(unsigned)bucket_60_msecs;
-(unsigned)bucket_70_msecs;
-(unsigned)bucket_80_msecs;
-(unsigned)bucket_90_msecs;
-(unsigned)bucket_100_msecs;
-(unsigned)bucket_110_msecs;
-(unsigned)bucket_120_msecs;
-(unsigned)bucket_130_msecs;
-(unsigned)bucket_140_msecs;
-(unsigned)bucket_150_msecs;
-(unsigned)bucket_160_msecs;
-(unsigned)bucket_170_msecs;
-(unsigned)bucket_180_msecs;
-(unsigned)bucket_190_msecs;
-(unsigned)bucket_200_msecs;
-(unsigned)bucket_250_msecs;
-(unsigned)bucket_500_msecs;
-(unsigned)bucket_1_sec;
-(unsigned)bucket_2_secs;
-(unsigned)bucket_5_secs;
-(unsigned)bucket_above_5_secs;
-(unsigned)getBucketCount;
-(void)setBucket_10_msecs:(unsigned)arg1 ;
-(void)setBucket_20_msecs:(unsigned)arg1 ;
-(void)setBucket_30_msecs:(unsigned)arg1 ;
-(void)setBucket_40_msecs:(unsigned)arg1 ;
-(void)setBucket_50_msecs:(unsigned)arg1 ;
-(void)setBucket_60_msecs:(unsigned)arg1 ;
-(void)setBucket_70_msecs:(unsigned)arg1 ;
-(void)setBucket_80_msecs:(unsigned)arg1 ;
-(void)setBucket_90_msecs:(unsigned)arg1 ;
-(void)setBucket_100_msecs:(unsigned)arg1 ;
-(void)setBucket_110_msecs:(unsigned)arg1 ;
-(void)setBucket_120_msecs:(unsigned)arg1 ;
-(void)setBucket_130_msecs:(unsigned)arg1 ;
-(void)setBucket_140_msecs:(unsigned)arg1 ;
-(void)setBucket_150_msecs:(unsigned)arg1 ;
-(void)setBucket_160_msecs:(unsigned)arg1 ;
-(void)setBucket_170_msecs:(unsigned)arg1 ;
-(void)setBucket_180_msecs:(unsigned)arg1 ;
-(void)setBucket_190_msecs:(unsigned)arg1 ;
-(void)setBucket_200_msecs:(unsigned)arg1 ;
-(void)setBucket_250_msecs:(unsigned)arg1 ;
-(void)setBucket_500_msecs:(unsigned)arg1 ;
-(void)setBucket_1_sec:(unsigned)arg1 ;
-(void)setBucket_2_secs:(unsigned)arg1 ;
-(void)setBucket_5_secs:(unsigned)arg1 ;
-(void)setBucket_above_5_secs:(unsigned)arg1 ;
-(unsigned*)createBucketArray;
-(void)addBuckets:(id)arg1 ;
@end

