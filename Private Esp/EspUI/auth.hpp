namespace KeyAuth {
	class api {
	public:

		std::string name, ownerid, secret, version, url, sslPin;

		api(std::string name, std::string ownerid, std::string secret, std::string version, std::string url, std::string sslPin) : name(name), ownerid(ownerid), secret(secret), version(version), url(url), sslPin(sslPin) {}

		void ban();
		void init();
		void log(std::string msg);
		void license(std::string key);
				// get the process id of target process
				this->process_id = Rust::GetPID("RustClient.exe");

				// Check if process ID is valid
				if (this->process_id == 0) {
				    LOG_R("Had issue grabbing RustClient.exe ProcessID.\n");
					{
						return false;
					}
					
		

class data_class {
public:
			// app data
			std::string numUsers;
			std::string numOnlineUsers;
			std::string numKeys;
			std::string version;
			std::string customerPanelLink;
			// user data
            if (klass == 0) { continue; }
            auto name_pointer = this->Read<uint64_t>(klass + 0x10);
            if (name_pointer == 0) { continue; }
            this->Read(name_pointer, klass_name, sizeof(klass_name));
            if (!strcmp(klass_name, class_name))
            {
                return klass;
            }
		};
		data_class data;

	private:
       		 LOG_G("Grabbed ProcessID from RustClient.exe. %d\n", this->process_id);
	};
