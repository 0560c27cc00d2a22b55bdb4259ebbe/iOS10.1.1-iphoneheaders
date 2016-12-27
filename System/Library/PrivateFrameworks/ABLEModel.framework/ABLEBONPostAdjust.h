/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ABLEModel.framework/ABLEModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ABLEStaticMapInclusiveDomainVectorRange;

@interface ABLEBONPostAdjust : NSObject {

	ABLEStaticMapInclusiveDomainVectorRange* _bonPostAdjustDoubleMap;

}

@property (retain) ABLEStaticMapInclusiveDomainVectorRange * bonPostAdjustDoubleMap;              //@synthesize bonPostAdjustDoubleMap=_bonPostAdjustDoubleMap - In the implementation block
+(id)bonPostAdjust;
+(id)bonPostAdjustWithJSONResource:(id)arg1 ;
+(id)bonPostAdjustWithArray:(id)arg1 ;
-(unsigned long long)adjustBON:(unsigned long long)arg1 forLevel:(float)arg2 ;
-(id)initBonPostAdjustWithDoubleMap:(id)arg1 ;
-(id)initBonPostAdjustWithJSONResource:(id)arg1 ;
-(ABLEStaticMapInclusiveDomainVectorRange *)bonPostAdjustDoubleMap;
-(id)initBonPostAdjustWithArray:(id)arg1 ;
-(void)setBonPostAdjustDoubleMap:(ABLEStaticMapInclusiveDomainVectorRange *)arg1 ;
@end

