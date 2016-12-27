/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _compressed_pair<SafeBrowsing::DatabaseStatus::Database *, std::__1::allocator<SafeBrowsing::DatabaseStatus::Database> > {
	Database __first_;
} compressed_pair<SafeBrowsing::DatabaseStatus::Database *, std::__1::allocator<SafeBrowsing::DatabaseStatus::Database> >;

typedef struct vector<SafeBrowsing::DatabaseStatus::Database, std::__1::allocator<SafeBrowsing::DatabaseStatus::Database> > {
	Database __begin_;
	Database __end_;
	compressed_pair<SafeBrowsing::DatabaseStatus::Database *, std::__1::allocator<SafeBrowsing::DatabaseStatus::Database> > __end_cap_;
} vector<SafeBrowsing::DatabaseStatus::Database, std::__1::allocator<SafeBrowsing::DatabaseStatus::Database> >;

typedef struct DatabaseStatus {
	vector<SafeBrowsing::DatabaseStatus::Database, std::__1::allocator<SafeBrowsing::DatabaseStatus::Database> > m_databases;
} DatabaseStatus;

typedef struct _compressed_pair<SafeBrowsing::SafeHashCache *, std::__1::default_delete<SafeBrowsing::SafeHashCache> > {
	SafeHashCache __first_;
} compressed_pair<SafeBrowsing::SafeHashCache *, std::__1::default_delete<SafeBrowsing::SafeHashCache> >;

typedef struct unique_ptr<SafeBrowsing::SafeHashCache, std::__1::default_delete<SafeBrowsing::SafeHashCache> > {
	compressed_pair<SafeBrowsing::SafeHashCache *, std::__1::default_delete<SafeBrowsing::SafeHashCache> > __ptr_;
} unique_ptr<SafeBrowsing::SafeHashCache, std::__1::default_delete<SafeBrowsing::SafeHashCache> >;

typedef struct _long {
	char* __data_;
	unsigned long long __size_;
	unsigned long long __cap_;
} long;

typedef struct {
	unsigned char __size_;
} SCD_Struct_SS6;

typedef struct _raw {
	unsigned long long __words[3];
} raw;

typedef struct _compressed_pair<SafeBrowsing::ServiceStatus::Connection *, std::__1::allocator<SafeBrowsing::ServiceStatus::Connection> > {
	Connection __first_;
} compressed_pair<SafeBrowsing::ServiceStatus::Connection *, std::__1::allocator<SafeBrowsing::ServiceStatus::Connection> >;

typedef struct vector<SafeBrowsing::ServiceStatus::Connection, std::__1::allocator<SafeBrowsing::ServiceStatus::Connection> > {
	Connection __begin_;
	Connection __end_;
	compressed_pair<SafeBrowsing::ServiceStatus::Connection *, std::__1::allocator<SafeBrowsing::ServiceStatus::Connection> > __end_cap_;
} vector<SafeBrowsing::ServiceStatus::Connection, std::__1::allocator<SafeBrowsing::ServiceStatus::Connection> >;

typedef struct _compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > > {
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > __first_;
} compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > >;

typedef struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > {
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > __begin_;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > __end_;
	compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > > __end_cap_;
} vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >;

typedef struct _short {
	char __data_[23];
	SCD_Struct_SS6 ;
} short;

typedef struct _rep {
	/*function pointer*/void* ;
	long __l;
	short __s;
	const aw) __r;
} rep;

typedef struct _compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > {
	const ep __first_;
} compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >;

typedef struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {
	compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > __r_;
} basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >;

typedef struct ServiceStatus {
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > m_name;
	int m_pid;
	vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > m_activeTransactions;
	vector<SafeBrowsing::ServiceStatus::Connection, std::__1::allocator<SafeBrowsing::ServiceStatus::Connection> > m_connections;
	int m_databaseUpdaterState;
} ServiceStatus;

typedef struct shared_ptr<SafeBrowsing::LookupContext> {
	LookupContext __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<SafeBrowsing::LookupContext>;

typedef struct _NSZone* NSZoneRef;

typedef struct OptionSet<Backend::LookupResult::Type> {
	unsigned m_storage;
} OptionSet<Backend::LookupResult::Type>;

typedef struct LookupResult {
	OptionSet<Backend::LookupResult::Type> type;
} LookupResult;

