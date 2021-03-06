/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, PLOperator;

@interface PLXPCListenerOperatorComposition : NSObject {

	NSDictionary* _registration;
	/*^block*/id _operatorBlock;
	PLOperator* _operator;

}

@property (__weak) PLOperator * operator;                      //@synthesize operator=_operator - In the implementation block
@property (readonly) NSDictionary * registration;              //@synthesize registration=_registration - In the implementation block
@property (nonatomic,copy) id operatorBlock;                   //@synthesize operatorBlock=_operatorBlock - In the implementation block
-(id)description;
-(PLOperator *)operator;
-(id)operatorBlock;
-(void)setOperatorBlock:(id)arg1 ;
-(void)setOperator:(PLOperator *)arg1 ;
-(id)initWithOperator:(id)arg1 withRegistration:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)messageRecievedForClientID:(short)arg1 withProcessName:(id)arg2 withKey:(id)arg3 withPayload:(id)arg4 ;
-(NSDictionary *)registration;
@end

