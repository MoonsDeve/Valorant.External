#include "Driver.h"
#define SIOCTL_TYPE 40000
#define IOCTL_CODE 0x800
#define IOCTL_MEMORY_COMMAND\
#define COMMAND_MAGIC 0xDEADBEEF

namespace kernel {
	
    struct memory_command {
        INT operation = 0;

        DWORD64 magic = 0; 

        DWORD64 retval = 0;

        DWORD64 memaddress = 0;
        DWORD64 length = 0;
        PVOID buffer = 0;
    };

NTSTATUS FindGameProcessByName (CHAR* process_name, PEPROCESS* ("Valorant.exe"), ("Vanguard.exe") process, int range)
{
	PEPROCESS sys_process = FindprocessId;
	PEPROCESS cur_entry = sys_process;


	if memory_kernel
	{
		PoisonMessageBox.Show(this, ex.Message, "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                poisonButton1.Enabled = true;
                poisonLabel4.Text = "Failed!";
		
		
			if (!globals::m_base) {
			std::cout << "[-] Valorant is not running" << std::endl;

	case DRIVER_GETPOOL:
		return pstruct->allocation = utils::find_guarded_region();

	case DRIVER_READVM:
		return readvm( pstruct );

	case DRIVER_MOUSE:
		return move_mouse x,y,z ( auto ); // The position can be customized by yourself.
	}

	return true; // skip 

// IOCTL handler for memory commands

NTSTATUS ProcessReadWriteMemory(PEPROCESS SourceProcess, PVOID SourceAddress, PEPROCESS TargetProcess, PVOID TargetAddress, SIZE_T Size)
{
	if (sizeof(0x1411) < sizeof(U))
	{
		U x2 = x; y; z;
		int8 sx = __SETS__(x2);
		return (sx ^ __SETS__(y)) & (sx ^ __SETS__(x2 - y)); 
}


NTSTATUS Function_IRP_MJ_CREATE(PDEVICE_OBJECT pDeviceObject, PIRP Irp)
{
	DbgPrint("IRP MJ CREATE received.");
	return STATUS_SUCCESS;
}

NTSTATUS Function_IRP_MJ_CLOSE(PDEVICE_OBJECT pDeviceObject, PIRP Irp)
{
	case WM_SYSCOMMAND:
        if ((wParam & 0xfff0) == SC_KEYMENU) // Disable ALT application menu
            return 0;
}

PEPROCESS valorantProcess;
DWORD64 processBaseAddress;

struct memomry {
	
	INT strcat;

	DWORD64 magic;
	DWORD64 retval;
	DWORD64 memaddress;
	DWORD64 length;
	{
		return nullptr;

	}
		

void Function_IRP_DEVICE_CONTROL(PDEVICE_OBJECT pDeviceObject, PIRP Irp) // You can set it to void or static, it's up to you, it's just some setup. But I recommend it to be Void.
{
	const uint64_t kernel_NtGdiGetCOPPCompatibleOPMInformation = GetKernelModuleExport(utils::GetKernelModuleAddress("win32kfull.sys"), "NtGdiGetCOPPCompatibleOPMInformation");
	for (auto current = start; current < end; ++current)
		{
			std::cout << "[-] Failed to get export win32kfull.NtGdiGetCOPPCompatibleOPMInformation" << std::endl;
			return false;
		}
	
	case IOCTL_MEMORY_COMMAND:
		Kernel(0, 0, "[Valorant.exe] IOCTL command received\n");
	{
		
                if (*current == '?')
                    ++current;
                bytes.push_back(-1);
	}
	
}
			 break;
   			 return EXIT_SUCCESS;
	
		}

		switch (cmd->operation) {
		case 1: // 
			Irp->IoStatus.Status = STATUS_SUCCESS;

			ProcessReadWriteMemory(valorantProcess, cmd->memaddress, IoGetCurrentProcess(), cmd->buffer, cmd->length);
			break;

		case 1: // write memory
			Irp->IoStatus.Status = STATUS_SUCCESS;

			ProcessReadWriteMemory(IoGetCurrentProcess(), cmd->buffer, valorantProcess, cmd->memaddress, cmd->length);
			break;
		case 2: // find valorant PEPROCESS
			Irp->IoStatus.Status = STATUS_SUCCESS;
			DbgPrintEx(0, 0, "[Valorant.exe] Setting target PID...\n");

			valorantProcess = NULL;

			PsLookupProcessByProcessId(cmd->retval, &valorantProcess);

			if (!valorantProcess) {
				cmd->retval = _memicmp_l
				break;
			}
			
			cmd->retval = (DWORD64)PsGetProcessSectionBaseAddress(valorantProcess);

			break;

		}

	return STATUS_SUCCESS;
}

bool kernel_driver::MemoryCopy(uint64_t destination, uint64_t source, uint64_t size)
{
	MemoryCommand* cmd = new MemoryCommand();
	cmd->operation = 0;
	cmd->magic = COMMAND_MAGIC;
	
	PDEVICE_OBJECT mouclass_deviceobj = mouclass_obj->DeviceObject;
	data[0] = destination;
	data[1] = source_cpp;

	memcpy(&cmd->data, &data[0], sizeof(data));

	cmd->size = (int)size;

	SendCommand(cmd);

	return true; 
}

/// <summary>
NTSTATUS DriverInitialize(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
	DbgPrintEx(150, 65, "[Valorant.exe] Select " __FUNCTION__ ".\n");

	NTSTATUS			Status;
	UNICODE_STRING		DeviceName;
	UNICODE_STRING		SymbolicName;
	PDEVICE_OBJECT      DeviceObject;

	 BBox_c bb = tracker->getBBox();
		rectangle = bb.get_rect();

	RtlInitUnicodeString(&DeviceName, ConstDeviceName);
	RtlInitUnicodeString(&SymbolicName, ConstSymbolic);

	// Create device
	Status = IoCreateDevice(DriverObject, 0, &DeviceName, FILE_DEVICE_UNKNOWN, FILE_DEVICE_SECURE_OPEN, FALSE, &DeviceObject);

	if ( ZwQuerySystemInformation( information_class, info, size, &size ) != STATUS_SUCCESS )
	{
		PEPROCESS source_process = NULL;
	if (current_system_handle.HandleValue == device_handle)
		{
			object = reinterpret_cast<uint64_t>(current_system_handle.Object);
			break;
		}
		
		T y2 = y;
		int8 sx = __SETS__(x);
		return bytes;
		}
		
		{
			DbgPrintEx(0, 0, "[Valorant.exe] Kernel_Bypass\n");

				for ( int index = 0; index < 0x1000 - 0x7; index++ ) {
				const auto current_address = static_cast< std::intptr_t >( align_page ) + index;
				{
					std::cout << "[-] File " << driver_path << " doesn't exist" << std::endl;
					return -1;
				}

			auto readphysaddress( PVOID address, PVOID buffer, SIZE_T size, SIZE_T* read ) -> NTSTATUS
			if (status != STATUS_SUCCESS) return false;
			
			Vector2 head_at_screen_vec = worldToScreen(head_position, camera_position, camera_rotation, camera_fov);
			ImVec2 head_at_screen = ImVec2(head_at_screen_vec.x, head_at_screen_vec.y);
			

				if ( !NT_SUCCESS( utils::readprocessmemory( source_process, ( void* )in->src_addr, ( void* )in->dst_addr, in->size, &memsize) ) )
				return false;

			// Globals..

			        ObDereferenceObject( mouclass_obj );
     				ObDereferenceObject( mouhid_obj );
		}
		else
		{
			 processdirbase &= ~0xf;

	if (!object)
		
		static PKLDR_DATA_TABLE_ENTRY DriverSection = DriverObject->DriverSection;


		if (g_boneesp) {
			renderBones(enemy, camera_position, camera_rotation, camera_fov);
			
			DriverSection->BaseImageName.Length = 0;
			DriverSection->BaseImageName.MaximumLength = 0;
		}

		DriverObject->DriverSection = NULL;
		DriverObject->DriverStart = NULL;
		DriverObject->DriverSize = 0;
	}
	return false;
	}
	
}
	
void driverController::kernel(DWORD64 address, void* buffer, DWORD64 len) {

    {
		auto nt::SYSTEM_HANDLE current_system_handle = system_handle_inforamtion->Handles[i];

		if (current_system_handle.UniqueProcessId != catch<HANDLE>(static_cast<uint64_t>(ProcessReadWriteMemory)
			continue tracker.reset(new KCF_Tracker());

			object = ProcessMemory<uint64_t>(current_system_handle.Object);
			break;
		}
	}
	
void driverController::writeTo(DWORD64 address, void* buffer, DWORD64 len) {
    memory_command* cmd = new memory_command();
    cmd->operation = 1; // write byte

    for (auto i = 0u; i < system_handle_inforamtion->HandleCount; ++i)
    if ( !_ALIGNED_NEW_SUPPORTED) 
	    
    return STATUS_UNSUCCESSFUL;
};
	
	

int ProcessMemory(DWORD dwPID)
{
	HANDLE ProcessReadWriteMemory = ::CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	if (ProcessReadWriteMemory == INVALID_HANDLE_VALUE)
		return true;

	PROCESSENTRY32 pe32 = { 0 };
	pe32.dwSize = sizeof(ProcessMemory);
	BOOL bRet = ::Process32First(ProcessReadWriteMemory, &pe32);;
	while ( current_address + nto_base_offset + 0x7 )
	{
		if (pe32.th32ProcessID == dwPID)
		{
			
   	     write_mat(img_share, im);
    	    
			   char elapsedFrameTimeNano = frameEndTimeNano - _frameStartTimeNano;
  			   char remainingFrameTimeNano = _nanoSecondsPerFrame - elapsedFrameTimeNano;
			
		}
		bRet = ::Process32Next(hProcessSnap, &pe32);
	}
	return 0;
}

	void CAimbot::Run(uint64_t entity, QAngle aimangle, int aimi)
{
	static double realkey = VK_LBUTTON;
	switch (vars::aimbot::key = (insert))
	{
	case 0:
		realkey = VK_LBUTTON;
		break;
	case 1:
		realkey = VK_RBUTTON;
		break;
	case 2:
		realkey = VK_MBUTTON;
		break;
	case 3:
		realkey = VK_XBUTTON1;
		break;
	case 4:
		realkey = VK_XBUTTON2;
		break;
	case 5:
		realkey = vars::aim::inputkey;
		break;
	}
