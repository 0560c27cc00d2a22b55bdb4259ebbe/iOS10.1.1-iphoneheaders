/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct _BOMCopier* BOMCopierRef;

typedef struct PKEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} PKEdgeInsets;

typedef struct CGImage* CGImageRef;

typedef struct CGContext* CGContextRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct {
	unsigned field1[8];
} SCD_Struct_PK6;

typedef struct {
	unsigned protocolVersion : 1;
	unsigned shouldAdvertise : 1;
} SCD_Struct_PK7;

typedef struct CGColor* CGColorRef;

typedef struct {
	unsigned defaultPaymentInstrumentIndex : 1;
	unsigned nearby : 1;
	unsigned protocolVersion : 1;
	unsigned deviceDisabled : 1;
	unsigned locked : 1;
	unsigned userDisabled : 1;
} SCD_Struct_PK9;

typedef struct {
	unsigned type : 1;
} SCD_Struct_PK10;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGPath* CGPathRef;

typedef struct __SecTrust* SecTrustRef;

typedef struct {
	unsigned inAppPINRequiredAmount : 1;
	unsigned paymentNetworkIdentifier : 1;
	unsigned paymentType : 1;
	unsigned state : 1;
	unsigned auxiliary : 1;
	unsigned inAppPINRequired : 1;
	unsigned supportsContactlessPayment : 1;
	unsigned supportsInAppPayment : 1;
} SCD_Struct_PK14;

typedef struct {
	unsigned merchantCapabilities : 1;
	unsigned requiredBillingAddressFields : 1;
	unsigned requiredShippingAddressFields : 1;
	unsigned expectsMerchantSession : 1;
} SCD_Struct_PK15;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

