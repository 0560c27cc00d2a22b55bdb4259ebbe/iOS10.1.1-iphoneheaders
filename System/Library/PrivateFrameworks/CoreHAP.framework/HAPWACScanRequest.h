/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, HAPWACScanFilter;

@interface HAPWACScanRequest : NSObject <NSCopying> {

	NSUUID* _uuid;
	unsigned long long _filterMethod;
	HAPWACScanFilter* _filter;
	/*^block*/id _completion;

}

@property (nonatomic,copy) NSUUID * uuid;                                    //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) unsigned long long filterMethod;              //@synthesize filterMethod=_filterMethod - In the implementation block
@property (nonatomic,retain) HAPWACScanFilter * filter;                      //@synthesize filter=_filter - In the implementation block
@property (nonatomic,copy) id completion;                                    //@synthesize completion=_completion - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFilter:(HAPWACScanFilter *)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(HAPWACScanFilter *)filter;
-(unsigned long long)filterMethod;
-(id)initWithFilter:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isEqualToWACScanRequest:(id)arg1 ;
@end

