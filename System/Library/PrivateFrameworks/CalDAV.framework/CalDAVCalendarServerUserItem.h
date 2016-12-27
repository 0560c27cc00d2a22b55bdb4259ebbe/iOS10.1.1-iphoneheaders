/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalDAV/CalDAV-Structs.h>
#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVHrefItem, CoreDAVLeafItem, CoreDAVItemWithNoChildren, CalDAVCalendarServerAccessItem, NSString, NSURL;

@interface CalDAVCalendarServerUserItem : CoreDAVItem {

	CoreDAVHrefItem* _href;
	CoreDAVLeafItem* _commonName;
	CoreDAVItemWithNoChildren* _inviteStatus;
	CalDAVCalendarServerAccessItem* _access;
	CoreDAVLeafItem* _summary;
	NSString* _firstName;
	NSString* _lastName;
	NSURL* _acceptedURL;

}

@property (nonatomic,retain) CoreDAVHrefItem * href;                                //@synthesize href=_href - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * commonName;                          //@synthesize commonName=_commonName - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * inviteStatus;              //@synthesize inviteStatus=_inviteStatus - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerAccessItem * access;               //@synthesize access=_access - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * summary;                             //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) NSString * firstName;                                  //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                                   //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSURL * acceptedURL;                                   //@synthesize acceptedURL=_acceptedURL - In the implementation block
-(BOOL)updateCalSharee:(void*)arg1 ;
-(void*)createCalShareeInDatabase:(CalDatabase*)arg1 andCalendar:(void*)arg2 ;
-(id)initWithCalSharee:(void*)arg1 ;
-(id)init;
-(id)description;
-(long long)compare:(id)arg1 ;
-(CoreDAVHrefItem *)href;
-(void)setHref:(CoreDAVHrefItem *)arg1 ;
-(CoreDAVLeafItem *)summary;
-(CoreDAVLeafItem *)commonName;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(id)copyParseRules;
-(CalDAVCalendarServerAccessItem *)access;
-(void)setInviteStatus:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setAccess:(CalDAVCalendarServerAccessItem *)arg1 ;
-(CoreDAVItemWithNoChildren *)inviteStatus;
-(void)setAcceptedURL:(NSURL *)arg1 ;
-(void)setFirstNameItem:(id)arg1 ;
-(void)setLastNameItem:(id)arg1 ;
-(void)setAcceptedURLItem:(id)arg1 ;
-(NSURL *)acceptedURL;
-(void)setCommonName:(CoreDAVLeafItem *)arg1 ;
-(id)initWithHREF:(id)arg1 commonName:(id)arg2 inviteStatus:(int)arg3 access:(int)arg4 ;
-(void)setSummary:(CoreDAVLeafItem *)arg1 ;
@end

