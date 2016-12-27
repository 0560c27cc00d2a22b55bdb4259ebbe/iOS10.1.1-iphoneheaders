/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSPReaderReferenceInfo : NSObject {

	long long _objectIdentifier;
	long long _componentIdentifier;

}

@property (nonatomic,readonly) long long objectIdentifier;                 //@synthesize objectIdentifier=_objectIdentifier - In the implementation block
@property (nonatomic,readonly) long long componentIdentifier;              //@synthesize componentIdentifier=_componentIdentifier - In the implementation block
+(id)newReferenceInfoWithObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 ;
-(long long)componentIdentifier;
-(id)initWithObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 ;
-(id)init;
-(long long)objectIdentifier;
@end

