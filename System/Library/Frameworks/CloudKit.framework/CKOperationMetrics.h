/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKMetric;

@interface CKOperationMetrics : NSObject <NSSecureCoding> {

	CKMetric* _cloudKitMetrics;
	CKMetric* _MMCSMetrics;

}

@property (nonatomic,retain) CKMetric * cloudKitMetrics;              //@synthesize cloudKitMetrics=_cloudKitMetrics - In the implementation block
@property (nonatomic,retain) CKMetric * MMCSMetrics;                  //@synthesize MMCSMetrics=_MMCSMetrics - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)CKPropertiesDescription;
-(void)setCloudKitMetrics:(CKMetric *)arg1 ;
-(CKMetric *)MMCSMetrics;
-(void)setMMCSMetrics:(CKMetric *)arg1 ;
-(CKMetric *)cloudKitMetrics;
@end

